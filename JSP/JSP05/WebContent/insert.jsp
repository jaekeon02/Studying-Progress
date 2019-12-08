<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body style="background : yellow;">
<form action="insert2.jsp" ><!-- method="post" post방식은 겉으로 보이지 않음 기본은 get -->
아이디 : <input type="text" name="id"><br>
비밀번호 : <input type="text" name="pw"><br>
이름 : <input type="text" name="name"><br>
전화번호 : <input type="text" name = "tel"><br>
<input type="submit" value="서버로 전송">
</form>
</body>
</html>