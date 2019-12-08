package shop;

import java.sql.*;
import java.util.ArrayList;
//DBó���� �������ִ� Ŭ����
//CRUD�߽����� ����
public class ReplyDAO {

	Connection con=null;
	
	public ReplyDAO(){
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
	
			public ArrayList<ReplyDTO> selectAll(ReplyDTO dto) {//���� �ʿ����� �ƴ��� Ȯ���Ұ�
			//dbó��
			//3.SQL�� ����
			ArrayList<ReplyDTO> list = new ArrayList<>();
			
			try {
				String sql = "select * from reply where id =?";
				PreparedStatement ps = con.prepareStatement(sql);
				ps.setString(1, dto.getId());				
				//4.SQL����			
				ResultSet rs=ps.executeQuery();
				
				while(rs.next()) {
					ReplyDTO dto2= new ReplyDTO();
					dto2.setId(rs.getString(1));
					dto2.setContent(rs.getString(2));
					dto2.setWriter(rs.getString(3));
					list.add(dto2);
				}
			} catch (Exception e) {
				System.out.println("�����߻�!!");
				System.out.println("�������� : " + e.getMessage());
			}
			return list;
	}
	
	
		
		
		
		
	
	
	
	
	
	
	
}
