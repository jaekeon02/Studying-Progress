package shop;

import java.sql.*;
import java.util.ArrayList;
//DB처리만 전담해주는 클래스
//CRUD중심으로 구현
public class BbsDAO {

	Connection con=null;
	
	public BbsDAO(){
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
	
	public void insert(BbsDTO dto) {//insert로 지정된것은 아님
		//db처리
		//3.SQL문 결정
		try {
			String sql = "insert into bbs value(?,?,?,?)";
			PreparedStatement ps = con.prepareStatement(sql);
			ps.setString(1, dto.getId());
			ps.setString(2, dto.getTitle());
			ps.setString(3, dto.getContent());
			ps.setString(4, dto.getWriter());
			
			//4.SQL전송			
			ps.executeUpdate();
		} catch (Exception e) {
			System.out.println("에러발생!!");
			System.out.println("에러내용 : " + e.getMessage());
		}
	}
	
	public void update(BbsDTO dto) {//insert로 지정된것은 아님
		//db처리
		//3.SQL문 결정
		try {
			String sql = "update bbs set title = ?, content= ?, writer =? where id =?";
			PreparedStatement ps = con.prepareStatement(sql);
			ps.setString(1, dto.getTitle());
			ps.setString(2, dto.getContent());
			ps.setString(3, dto.getWriter());
			ps.setString(4, dto.getId());
			//4.SQL전송			
			ps.executeUpdate();
		} catch (Exception e) {
			System.out.println("에러발생!!");
			System.out.println("에러내용 : " + e.getMessage());
		}
	}
	
		public ArrayList<BbsDTO> selectAll() {
			//db처리
			//3.SQL문 결정
			ArrayList<BbsDTO> list = new ArrayList<>();
			try {
				String sql = "select * from bbs";
				PreparedStatement ps = con.prepareStatement(sql);
								
				//4.SQL전송			
				ResultSet rs=ps.executeQuery();
				
				while(rs.next()) {
					BbsDTO dto= new BbsDTO();
					dto.setId(rs.getString(1));
					dto.setTitle(rs.getString(2));
					dto.setContent(rs.getString(3));
					dto.setWriter(rs.getString(4));
					list.add(dto);
				}
			} catch (Exception e) {
				System.out.println("에러발생!!");
				System.out.println("에러내용 : " + e.getMessage());
			}
			return list;
	}
	
	
		
		public BbsDTO select(BbsDTO dto) {
			//db처리
			//3.SQL문 결정
			BbsDTO dto2= new BbsDTO();
				try {
				String sql = "select * from bbs where id =?";
				PreparedStatement ps = con.prepareStatement(sql);
				ps.setString(1, dto.getId());
				//4.SQL전송			
				ResultSet rs=ps.executeQuery();
				
				/*while(rs.next()) {//하나밖에 없기 때문에 while문으로 돌리지않아도 됨*/
					if(rs.next()) {
					
					dto2.setId(rs.getString(1));
					dto2.setTitle(rs.getString(2));
					dto2.setContent(rs.getString(3));
					dto2.setWriter(rs.getString(4));
					}
			} catch (Exception e) {
				System.out.println("에러발생!!");
				System.out.println("에러내용 : " + e.getMessage());
			}
			return dto2;
	}
		public void delete(BbsDTO dto) {//insert로 지정된것은 아님
			//db처리
			//3.SQL문 결정
			try {
				String sql = "delete from bbs where id =?";
				PreparedStatement ps = con.prepareStatement(sql);
				ps.setString(1, dto.getId());
								
				//4.SQL전송			
				ps.executeUpdate();
			} catch (Exception e) {
				System.out.println("에러발생!!");
				System.out.println("에러내용 : " + e.getMessage());
			}
		}
		
		
	
	
	
	
	
	
	
}
