package shop;

import java.sql.*;
//DB처리만 전담해주는 클래스
//CRUD중심으로 구현
public class MemberDAO {

	Connection con=null;
	
	public boolean login(MemberDTO dto) {
		boolean flag = false;
		try {
			String sql = "select * from member where id =? and pw =?";
			PreparedStatement ps = con.prepareStatement(sql);
			ps.setString(1, dto.getId());
			ps.setString(2, dto.getPw());
			
			ResultSet rs=ps.executeQuery();
			if(rs.next()) {
				System.out.println("로그인 ok");
				flag = true;
			}else {
				System.out.println("로그인 not");
			}
			
		} catch (Exception e) {
			System.out.println("에러 발생");
		}
		return flag;
		
		
	}
	
	public MemberDAO(){
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
	public void insert(MemberDTO dto) {//insert로 지정된것은 아님
		//db처리
		//3.SQL문 결정
		try {
			String sql = "insert into member value(?,?,?,?)";
			PreparedStatement ps = con.prepareStatement(sql);
			ps.setString(1, dto.getId());
			ps.setString(2, dto.getPw());
			ps.setString(3, dto.getName());
			ps.setString(4, dto.getTel());
			
			//4.SQL전송			
			ps.executeUpdate();
		} catch (Exception e) {
			System.out.println("에러발생!!");
			System.out.println("에러내용 : " + e.getMessage());
		}
		

	}
	
	
	
	
	
	
	
	
	
}
