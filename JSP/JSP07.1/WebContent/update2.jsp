<%@page import="bean.MemberDAO"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>
<!-- 클라이언트로부터 넘어온 값 dto에 넣는다. -->
<jsp:useBean id="dto" class="bean.MemberDTO"></jsp:useBean>
<jsp:setProperty property="*" name="dto"/>
<!-- dto를 dao의 update메소드를 호출해서 db에 수정한다. -->
<%
MemberDAO dao = new MemberDAO();
%>
수정이 요청되었습니다.
</body>
</html>