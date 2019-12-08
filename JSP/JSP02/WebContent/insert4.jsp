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

out.print("이름은 "+name+"<br>");
out.print("전화번호는"+com+tel+"<br>");
out.print("성별은"+gender+"<br>");
out.print("학번은"+grade+"<br>");
out.print("전공은"+major+"<br>");
out.print("알게된 방법은");
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