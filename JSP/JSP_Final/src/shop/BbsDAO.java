package shop;

import java.sql.*;
import java.util.ArrayList;
//DBó���� �������ִ� Ŭ����
//CRUD�߽����� ����
public class BbsDAO {

	Connection con=null;
	
	public BbsDAO(){
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
	
	public void insert(BbsDTO dto) {//insert�� �����Ȱ��� �ƴ�
		//dbó��
		//3.SQL�� ����
		try {
			String sql = "insert into bbs value(?,?,?,?)";
			PreparedStatement ps = con.prepareStatement(sql);
			ps.setString(1, dto.getId());
			ps.setString(2, dto.getTitle());
			ps.setString(3, dto.getContent());
			ps.setString(4, dto.getWriter());
			
			//4.SQL����			
			ps.executeUpdate();
		} catch (Exception e) {
			System.out.println("�����߻�!!");
			System.out.println("�������� : " + e.getMessage());
		}
	}
	
	public void update(BbsDTO dto) {//insert�� �����Ȱ��� �ƴ�
		//dbó��
		//3.SQL�� ����
		try {
			String sql = "update bbs set title = ?, content= ?, writer =? where id =?";
			PreparedStatement ps = con.prepareStatement(sql);
			ps.setString(1, dto.getTitle());
			ps.setString(2, dto.getContent());
			ps.setString(3, dto.getWriter());
			ps.setString(4, dto.getId());
			//4.SQL����			
			ps.executeUpdate();
		} catch (Exception e) {
			System.out.println("�����߻�!!");
			System.out.println("�������� : " + e.getMessage());
		}
	}
	
		public ArrayList<BbsDTO> selectAll() {
			//dbó��
			//3.SQL�� ����
			ArrayList<BbsDTO> list = new ArrayList<>();
			try {
				String sql = "select * from bbs";
				PreparedStatement ps = con.prepareStatement(sql);
								
				//4.SQL����			
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
				System.out.println("�����߻�!!");
				System.out.println("�������� : " + e.getMessage());
			}
			return list;
	}
	
	
		
		public BbsDTO select(BbsDTO dto) {
			//dbó��
			//3.SQL�� ����
			BbsDTO dto2= new BbsDTO();
				try {
				String sql = "select * from bbs where id =?";
				PreparedStatement ps = con.prepareStatement(sql);
				ps.setString(1, dto.getId());
				//4.SQL����			
				ResultSet rs=ps.executeQuery();
				
				/*while(rs.next()) {//�ϳ��ۿ� ���� ������ while������ �������ʾƵ� ��*/
					if(rs.next()) {
					
					dto2.setId(rs.getString(1));
					dto2.setTitle(rs.getString(2));
					dto2.setContent(rs.getString(3));
					dto2.setWriter(rs.getString(4));
					}
			} catch (Exception e) {
				System.out.println("�����߻�!!");
				System.out.println("�������� : " + e.getMessage());
			}
			return dto2;
	}
		public void delete(BbsDTO dto) {//insert�� �����Ȱ��� �ƴ�
			//dbó��
			//3.SQL�� ����
			try {
				String sql = "delete from bbs where id =?";
				PreparedStatement ps = con.prepareStatement(sql);
				ps.setString(1, dto.getId());
								
				//4.SQL����			
				ps.executeUpdate();
			} catch (Exception e) {
				System.out.println("�����߻�!!");
				System.out.println("�������� : " + e.getMessage());
			}
		}
		
		
	
	
	
	
	
	
	
}
