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

//1. �ڹٿ� db�� �����ϴ� connector����
Class.forName("com.mysql.jdbc.Driver");//���stream�� ����
//New ���� �ʾƵ� �ٷ� ���� ���� -> ��Ÿ�� �޼ҵ�(�̸� ���� �Ҵ��س��ұ� ������ �ٷ� ���� ���� �Ҵ� ��Ű�� ����new�� �ʿ����)
out.print("1. Ŀ���� ���� ok...<br>");

//2. db���� - url, id, pw
String url="jdbc:mysql://localhost:3306/shop";
//�ٸ������ �����ϱ� ���ؼ� localhost�ڸ��� ������ ������ ��
String user="root";
String password="1234";

Connection con=DriverManager.getConnection(url, user, password);
out.print("2. DB���� ok...<br>");

//3. sql�� ����
String sql = "update computer set company =? where id=?";
PreparedStatement ps = con.prepareStatement(sql);
//db������ �ε����� 1���� ����
ps.setString(1, company);
ps.setString(2, id);


out.print("3. ok..<br>");

//4. sql�� mySQL������ ����
ps.executeUpdate();
out.print("4. sql�� mySQL������ ���� ok...<br>");

%>
</body>
</html>