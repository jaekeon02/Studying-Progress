<%@page import="java.sql.PreparedStatement"%>
<%@page import="java.sql.Connection"%>
<%@page import="java.sql.DriverManager"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>
<%
String id=request.getParameter("id");

String company=request.getParameter("company");

//1. 자바와 db를 연결하는 connector설정
Class.forName("com.mysql.jdbc.Driver");//통로stream을 형성
//New 하지 않아도 바로 쓸수 있음 -> 스타팅 메소드(미리 렘에 할당해놓았기 때문에 바로 쓸수 있음 할당 시키기 위한new가 필요없음)
out.print("1. 커넥터 설정 ok...<br>");

//2. db접속 - url, id, pw
String url="jdbc:mysql://localhost:3306/shop";
//다른사람것 접속하기 위해선 localhost자리에 아이피 적으면 됨
String user="root";
String password="1234";

Connection con=DriverManager.getConnection(url, user, password);
out.print("2. DB연결 ok...<br>");

//3. sql문 생성
String sql = "update computer set company =? where id=?";
PreparedStatement ps = con.prepareStatement(sql);
//db에서는 인덱스가 1부터 시작
ps.setString(1, company);
ps.setString(2, id);


out.print("3. ok..<br>");

//4. sql문 mySQL서버에 전송
ps.executeUpdate();
out.print("4. sql문 mySQL서버에 전송 ok...<br>");

%>
</body>
</html>