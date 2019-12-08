<%@page import="java.sql.ResultSet"%>

<%@page import="java.sql.PreparedStatement"%>

<%@page import="java.sql.Connection"%>

<%@page import="java.sql.DriverManager"%>

<%@ page language="java" contentType="text/html; charset=UTF-8"

	pageEncoding="UTF-8"%>

<!DOCTYPE html>

<html>

<head>

<meta charset="UTF-8">

<title>Insert title here</title>

</head>

<body>

	<%

		//String id = request.getParameter("id");



		//1. 자바와 db를 연결하는 connector설정

		Class.forName("com.mysql.jdbc.Driver");

		out.print("1. 커넥터 설정 ok..<br>");



		//2. db접속- url, id, pw

		String url = "jdbc:mysql://localhost:3306/shop";

		String user = "root";

		String password = "1234";



		Connection con = DriverManager.getConnection(url, user, password);

		out.print("2. db연결 ok..<br>");



		//3. sql문 생성(객체화)

		String sql = "select * from book where id = '2'";

		PreparedStatement ps = con.prepareStatement(sql);

		//ps.setString(1, id);

		

		//1번 물음표에 id를 스트링으로 넣어줘.

		out.print("3. sql문 생성 ok..<br>");



		//4. sql문 mySQL서버에 전송

		ResultSet result = ps.executeQuery();

		out.print("4. sql문 mySQL서버에 전송 ok..<br><hr>");

		

		//5. 결과 받아온 것 추출

		while(result.next()){ //반환값이 있는지 없는지 체크

			String id2 = result.getString(1); //id를 추출

			String name = result.getString(2);

			String content = result.getString(3);

			

			out.print("검색한 id는 " + id2 + "<br>");

			out.print("검색한 title은 " + name + "<br>");

			out.print("검색한 company는 " + content + "<br>");

		}

	%>

</body>

</html>