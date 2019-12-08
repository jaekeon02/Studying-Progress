package shop;

import java.sql.*;
import java.util.ArrayList;
//DB처리만 전담해주는 클래스
//CRUD중심으로 구현
public class ReplyDAO {

	Connection con=null;
	
	public ReplyDAO(){
		//드라이버 설정
		//db연결

		try {
			Class.forName("com.mysql.jdbc.Driver");
			String url="jdbc:mysql://localhost:3306/shop";
			String user="root";
			String password="1234";
			con = DriverManager.getConnection(url, user, password);
		} catch (Exception e) {
			System.out.println("db연결시 에러발생!!");
			System.out.println("에러 내용"+e.getMessage());
		}
	}
	
			public ArrayList<ReplyDTO> selectAll(ReplyDTO dto) {//값이 필요한지 아닌지 확인할것
			//db처리
			//3.SQL문 결정
			ArrayList<ReplyDTO> list = new ArrayList<>();
			
			try {
				String sql = "select * from reply where id =?";
				PreparedStatement ps = con.prepareStatement(sql);
				ps.setString(1, dto.getId());				
				//4.SQL전송			
				ResultSet rs=ps.executeQuery();
				
				while(rs.next()) {
					ReplyDTO dto2= new ReplyDTO();
					dto2.setId(rs.getString(1));
					dto2.setContent(rs.getString(2));
					dto2.setWriter(rs.getString(3));
					list.add(dto2);
				}
			} catch (Exception e) {
				System.out.println("에러발생!!");
				System.out.println("에러내용 : " + e.getMessage());
			}
			return list;
	}
	
	
		
		
		
		
	
	
	
	
	
	
	
}
