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
<!-- Ŭ���̾�Ʈ�κ��� �Ѿ�� �� dto�� �ִ´�. -->
<jsp:useBean id="dto" class="bean.MemberDTO"></jsp:useBean>
<jsp:setProperty property="*" name="dto"/>
<!-- dto�� dao�� update�޼ҵ带 ȣ���ؼ� db�� �����Ѵ�. -->
<%
MemberDAO dao = new MemberDAO();
%>
������ ��û�Ǿ����ϴ�.
</body>
</html>