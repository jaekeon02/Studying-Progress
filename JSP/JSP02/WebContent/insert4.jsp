<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<%
String name = request.getParameter("name");
String com = request.getParameter("com");
String tel = request.getParameter("tel");
String grade = request.getParameter("grade");
String major = request.getParameter("major");
String gender = request.getParameter("gender");
String[] way = request.getParameterValues("way");

out.print("�̸��� "+name+"<br>");
out.print("��ȭ��ȣ��"+com+tel+"<br>");
out.print("������"+gender+"<br>");
out.print("�й���"+grade+"<br>");
out.print("������"+major+"<br>");
out.print("�˰Ե� �����");
for(String s : way)
	{out.print(" "+s);}



%>

<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>

</body>
</html>