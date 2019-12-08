<%@page import="bean.MemberDTO"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>
<% //스크립트릿 자바로 된 부분코드

//클라이언트가 입력한 데이터를 서버에서 받아주어 변수에 저장
String id = request.getParameter("id");
String pw = request.getParameter("pw");
String name = request.getParameter("name");
String tel = request.getParameter("tel");

MemberDTO dto = new MemberDTO();
dto.setId(id);
dto.setPw(pw);
dto.setName(name);
dto.setTel(tel);
%>
<h3>받은 데이터 확인</h3>
<hr color="red">
아이디 : <%= id %><br>
비밀번호 : <%= pw %><br>
이름 : <%= name %><br>
전화번호 : <%= tel %><br>


</body>
</html>