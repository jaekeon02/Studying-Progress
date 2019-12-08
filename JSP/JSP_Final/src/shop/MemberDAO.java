package shop;

import java.sql.*;
//DBó���� �������ִ� Ŭ����
//CRUD�߽����� ����
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
				System.out.println("�α��� ok");
				flag = true;
			}else {
				System.out.println("�α��� not");
			}
			
		} catch (Exception e) {
			System.out.println("���� �߻�");
		}
		return flag;
		
		
	}
	
	public MemberDAO(){
		//����̹� ����
		//db����
		
		try {
			Class.forName("com.mysql.jdbc.Driver");
			String url="jdbc:mysql://localhost:3306/shop";
			String user="root";
			String password="1234";
			con = DriverManager.getConnection(url, user, password);
		} catch (Exception e) {
			System.out.println("db����� �����߻�!!");
			System.out.println("���� ����"+e.getMessage());
		}
	}
	public void insert(MemberDTO dto) {//insert�� �����Ȱ��� �ƴ�
		//dbó��
		//3.SQL�� ����
		try {
			String sql = "insert into member value(?,?,?,?)";
			PreparedStatement ps = con.prepareStatement(sql);
			ps.setString(1, dto.getId());
			ps.setString(2, dto.getPw());
			ps.setString(3, dto.getName());
			ps.setString(4, dto.getTel());
			
			//4.SQL����			
			ps.executeUpdate();
		} catch (Exception e) {
			System.out.println("�����߻�!!");
			System.out.println("�������� : " + e.getMessage());
		}
		

	}
	
	
	
	
	
	
	
	
	
}
