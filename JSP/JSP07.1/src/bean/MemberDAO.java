package bean;

import java.sql.DriverManager;
import java.sql.Connection;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;



//DAO(Data Access Object) db처리 전담 클래스
//crud구현된 클래스
public class MemberDAO {
	//insert
	public void insert(MemberDTO dto) throws Exception {
		//1. 커넥터(드라이버 자바와 서버의 연결) 설정
		Class.forName("com.mysql.jdbc.Driver");
		System.out.println("1. 커넥터 설정 ok...<br>");
		//2. db연결(url,id,pw)
		String url= "jdbc:mysql://localhost:3306/shop";
		String user = "root";
		String password = "1234";
		
		Connection con= DriverManager.getConnection(url,user,password);
		System.out.print("2. db연결 ok...<br>");
		//3. sql결정해서 객체화
		String sql = "insert into member value (?,?,?,?)";
		PreparedStatement ps = con.prepareStatement(sql);
		ps.setString(1,dto.getId());
		ps.setString(2,dto.getPw());
		ps.setString(3,dto.getName());
		ps.setString(4,dto.getTel());
		System.out.println("3.ds");
		//4. sql문 전송
		
		ps.executeUpdate();
		System.out.println("sql문 mysql서버에 전송");
	}
	//delete
	public void delete(MemberDTO dto) throws Exception {
		//1. 자바와 db를 연결하는 connector설정
		Class.forName("com.mysql.jdbc.Driver");//통로stream을 형성
		//New 하지 않아도 바로 쓸수 있음 -> 스타팅 메소드(미리 렘에 할당해놓았기 때문에 바로 쓸수 있음 할당 시키기 위한new가 필요없음)
		System.out.print("1. 커넥터 설정 ok...<br>");

		//2. db접속 - url, id, pw
		String url="jdbc:mysql://localhost:3306/shop";
		//다른사람것 접속하기 위해선 localhost자리에 아이피 적으면 됨
		String user="root";
		String password="1234";

		Connection con=DriverManager.getConnection(url, user, password);
		System.out.print("2. DB연결 ok...<br>");

		//3. sql문 생성
		String sql = "delete from computer where company = ?";
		PreparedStatement ps = con.prepareStatement(sql);
		//db에서는 인덱스가 1부터 시작
		ps.setString(1, dto.getId());


		System.out.print("3. ok..<br>");

		//4. sql문 mySQL서버에 전송
		ps.executeUpdate();
		System.out.print("4. sql문 mySQL서버에 전송 ok...<br>");
	}
	//update
	public void update(MemberDTO dto) throws Exception {
		//1. 자바와 db를 연결하는 connector설정
		Class.forName("com.mysql.jdbc.Driver");//통로stream을 형성
		//New 하지 않아도 바로 쓸수 있음 -> 스타팅 메소드(미리 렘에 할당해놓았기 때문에 바로 쓸수 있음 할당 시키기 위한new가 필요없음)
		System.out.print("1. 커넥터 설정 ok...<br>");

		//2. db접속 - url, id, pw
		String url="jdbc:mysql://localhost:3306/shop";
		//다른사람것 접속하기 위해선 localhost자리에 아이피 적으면 됨
		String user="root";
		String password="1234";

		Connection con=DriverManager.getConnection(url, user, password);
		System.out.print("2. DB연결 ok...<br>");

		//3. sql문 생성
		String sql = "update member set tel =? where id=?";
		PreparedStatement ps = con.prepareStatement(sql);
		//db에서는 인덱스가 1부터 시작
		ps.setString(1, dto.getTel());
		ps.setString(2, dto.getId());


		System.out.print("3. ok..<br>");

		//4. sql문 mySQL서버에 전송
		ps.executeUpdate();
		System.out.print("4. sql문 mySQL서버에 전송 ok...<br>");
	}
	
	//selectOne
	public void selectOne(MemberDTO dto) throws Exception {
		//1. 자바와 db를 연결하는 connector설정
		Class.forName("com.mysql.jdbc.Driver");//통로stream을 형성
		//New 하지 않아도 바로 쓸수 있음 -> 스타팅 메소드(미리 렘에 할당해놓았기 때문에 바로 쓸수 있음 할당 시키기 위한new가 필요없음)
		System.out.print("1. 커넥터 설정 ok...<br>");

		//2. db접속 - url, id, pw
		String url="jdbc:mysql://localhost:3306/shop";
		//다른사람것 접속하기 위해선 localhost자리에 아이피 적으면 됨
		String user="root";
		String password="1234";

		Connection con=DriverManager.getConnection(url, user, password);
		System.out.print("2. DB연결 ok...<br>");

		//3. sql문 생성
		String sql = "select * from book where id = '1' ";
		PreparedStatement ps = con.prepareStatement(sql);
		//db에서는 인덱스가 1부터 시작

		//ps.setString(2, id);


		System.out.print("3. ok..<br>");

		//4. sql문 mySQL서버에 전송
		ResultSet result = ps.executeQuery();
		//ResultSet -> 결과에 집합
		System.out.print("4. sql문 mySQL서버에 전송 ok...<br><hr>");

		//5.결과받아온것 추출

		if(result.next()){//반환값이 있는지 없는지 체크해주는 메소드
			String id2 =result.getString(1);//아이디를 추출
			String name = result.getString(2);//타이틀 추출
			String content = result.getString(3);
			System.out.print("<br>"+"검색한 id는" +id2+"<br>");
			System.out.print("검색한 title은" +name+"<br>");
			System.out.print("검색한 company는" +content+"<br>");
		}

	}
	//selectAll
	public void selectAll() throws Exception {
		//1. 자바와 db를 연결하는 connector설정

				Class.forName("com.mysql.jdbc.Driver");

				System.out.print("1. 커넥터 설정 ok..<br>");



				//2. db접속- url, id, pw

				String url = "jdbc:mysql://localhost:3306/shop";

				String user = "root";

				String password = "1234";



				Connection con = DriverManager.getConnection(url, user, password);

				System.out.print("2. db연결 ok..<br>");



				//3. sql문 생성(객체화)

				String sql = "select * from book where id = '2'";

				PreparedStatement ps = con.prepareStatement(sql);

				//ps.setString(1, id);

				

				//1번 물음표에 id를 스트링으로 넣어줘.

				System.out.print("3. sql문 생성 ok..<br>");



				//4. sql문 mySQL서버에 전송

				ResultSet result = ps.executeQuery();

				System.out.print("4. sql문 mySQL서버에 전송 ok..<br><hr>");

				

				//5. 결과 받아온 것 추출

				while(result.next()){ //반환값이 있는지 없는지 체크

					String id2 = result.getString(1); //id를 추출

					String name = result.getString(2);

					String content = result.getString(3);

					

					System.out.print("검색한 id는 " + id2 + "<br>");

					System.out.print("검색한 title은 " + name + "<br>");

					System.out.print("검색한 company는 " + content + "<br>");} 
	
	}
}
