package bean;

import java.sql.DriverManager;
import java.sql.Connection;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;



//DAO(Data Access Object) dbó�� ���� Ŭ����
//crud������ Ŭ����
public class MemberDAO {
	//insert
	public void insert(MemberDTO dto) throws Exception {
		//1. Ŀ����(����̹� �ڹٿ� ������ ����) ����
		Class.forName("com.mysql.jdbc.Driver");
		System.out.println("1. Ŀ���� ���� ok...<br>");
		//2. db����(url,id,pw)
		String url= "jdbc:mysql://localhost:3306/shop";
		String user = "root";
		String password = "1234";
		
		Connection con= DriverManager.getConnection(url,user,password);
		System.out.print("2. db���� ok...<br>");
		//3. sql�����ؼ� ��üȭ
		String sql = "insert into member value (?,?,?,?)";
		PreparedStatement ps = con.prepareStatement(sql);
		ps.setString(1,dto.getId());
		ps.setString(2,dto.getPw());
		ps.setString(3,dto.getName());
		ps.setString(4,dto.getTel());
		System.out.println("3.ds");
		//4. sql�� ����
		
		ps.executeUpdate();
		System.out.println("sql�� mysql������ ����");
	}
	//delete
	public void delete(MemberDTO dto) throws Exception {
		//1. �ڹٿ� db�� �����ϴ� connector����
		Class.forName("com.mysql.jdbc.Driver");//���stream�� ����
		//New ���� �ʾƵ� �ٷ� ���� ���� -> ��Ÿ�� �޼ҵ�(�̸� ���� �Ҵ��س��ұ� ������ �ٷ� ���� ���� �Ҵ� ��Ű�� ����new�� �ʿ����)
		System.out.print("1. Ŀ���� ���� ok...<br>");

		//2. db���� - url, id, pw
		String url="jdbc:mysql://localhost:3306/shop";
		//�ٸ������ �����ϱ� ���ؼ� localhost�ڸ��� ������ ������ ��
		String user="root";
		String password="1234";

		Connection con=DriverManager.getConnection(url, user, password);
		System.out.print("2. DB���� ok...<br>");

		//3. sql�� ����
		String sql = "delete from computer where company = ?";
		PreparedStatement ps = con.prepareStatement(sql);
		//db������ �ε����� 1���� ����
		ps.setString(1, dto.getId());


		System.out.print("3. ok..<br>");

		//4. sql�� mySQL������ ����
		ps.executeUpdate();
		System.out.print("4. sql�� mySQL������ ���� ok...<br>");
	}
	//update
	public void update(MemberDTO dto) throws Exception {
		//1. �ڹٿ� db�� �����ϴ� connector����
		Class.forName("com.mysql.jdbc.Driver");//���stream�� ����
		//New ���� �ʾƵ� �ٷ� ���� ���� -> ��Ÿ�� �޼ҵ�(�̸� ���� �Ҵ��س��ұ� ������ �ٷ� ���� ���� �Ҵ� ��Ű�� ����new�� �ʿ����)
		System.out.print("1. Ŀ���� ���� ok...<br>");

		//2. db���� - url, id, pw
		String url="jdbc:mysql://localhost:3306/shop";
		//�ٸ������ �����ϱ� ���ؼ� localhost�ڸ��� ������ ������ ��
		String user="root";
		String password="1234";

		Connection con=DriverManager.getConnection(url, user, password);
		System.out.print("2. DB���� ok...<br>");

		//3. sql�� ����
		String sql = "update member set tel =? where id=?";
		PreparedStatement ps = con.prepareStatement(sql);
		//db������ �ε����� 1���� ����
		ps.setString(1, dto.getTel());
		ps.setString(2, dto.getId());


		System.out.print("3. ok..<br>");

		//4. sql�� mySQL������ ����
		ps.executeUpdate();
		System.out.print("4. sql�� mySQL������ ���� ok...<br>");
	}
	
	//selectOne
	public void selectOne(MemberDTO dto) throws Exception {
		//1. �ڹٿ� db�� �����ϴ� connector����
		Class.forName("com.mysql.jdbc.Driver");//���stream�� ����
		//New ���� �ʾƵ� �ٷ� ���� ���� -> ��Ÿ�� �޼ҵ�(�̸� ���� �Ҵ��س��ұ� ������ �ٷ� ���� ���� �Ҵ� ��Ű�� ����new�� �ʿ����)
		System.out.print("1. Ŀ���� ���� ok...<br>");

		//2. db���� - url, id, pw
		String url="jdbc:mysql://localhost:3306/shop";
		//�ٸ������ �����ϱ� ���ؼ� localhost�ڸ��� ������ ������ ��
		String user="root";
		String password="1234";

		Connection con=DriverManager.getConnection(url, user, password);
		System.out.print("2. DB���� ok...<br>");

		//3. sql�� ����
		String sql = "select * from book where id = '1' ";
		PreparedStatement ps = con.prepareStatement(sql);
		//db������ �ε����� 1���� ����

		//ps.setString(2, id);


		System.out.print("3. ok..<br>");

		//4. sql�� mySQL������ ����
		ResultSet result = ps.executeQuery();
		//ResultSet -> ����� ����
		System.out.print("4. sql�� mySQL������ ���� ok...<br><hr>");

		//5.����޾ƿ°� ����

		if(result.next()){//��ȯ���� �ִ��� ������ üũ���ִ� �޼ҵ�
			String id2 =result.getString(1);//���̵� ����
			String name = result.getString(2);//Ÿ��Ʋ ����
			String content = result.getString(3);
			System.out.print("<br>"+"�˻��� id��" +id2+"<br>");
			System.out.print("�˻��� title��" +name+"<br>");
			System.out.print("�˻��� company��" +content+"<br>");
		}

	}
	//selectAll
	public void selectAll() throws Exception {
		//1. �ڹٿ� db�� �����ϴ� connector����

				Class.forName("com.mysql.jdbc.Driver");

				System.out.print("1. Ŀ���� ���� ok..<br>");



				//2. db����- url, id, pw

				String url = "jdbc:mysql://localhost:3306/shop";

				String user = "root";

				String password = "1234";



				Connection con = DriverManager.getConnection(url, user, password);

				System.out.print("2. db���� ok..<br>");



				//3. sql�� ����(��üȭ)

				String sql = "select * from book where id = '2'";

				PreparedStatement ps = con.prepareStatement(sql);

				//ps.setString(1, id);

				

				//1�� ����ǥ�� id�� ��Ʈ������ �־���.

				System.out.print("3. sql�� ���� ok..<br>");



				//4. sql�� mySQL������ ����

				ResultSet result = ps.executeQuery();

				System.out.print("4. sql�� mySQL������ ���� ok..<br><hr>");

				

				//5. ��� �޾ƿ� �� ����

				while(result.next()){ //��ȯ���� �ִ��� ������ üũ

					String id2 = result.getString(1); //id�� ����

					String name = result.getString(2);

					String content = result.getString(3);

					

					System.out.print("�˻��� id�� " + id2 + "<br>");

					System.out.print("�˻��� title�� " + name + "<br>");

					System.out.print("�˻��� company�� " + content + "<br>");} 
	
	}
}
