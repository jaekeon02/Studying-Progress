<%@page import="shop.BbsDAO"%>
<%@page import="shop.MemberDAO"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
<link type="text/css" rel="stylesheet" href="css/project.css">

</head>
<body>
<!-- Ŭ���̾�Ʈ�� �Է��� ������ �޾Ƽ� db�� ���� -->
<!-- ���� �����͸� dto�� �־ �����־���� -->
<jsp:useBean id="dto" class="shop.BbsDTO"></jsp:useBean>
<jsp:setProperty property="*" name="dto"/>
<!-- db�� ���� -->
<%
BbsDAO dao = new BbsDAO();
dao.insert(dto);
%> 
<div id="total">
	<!-- �޴��� ���� �κ� -->
	<div id="top">
		<jsp:include page="top.jsp"></jsp:include><!-- �̸� ���� ž���� -->
	</div>
	
	<!-- ��ٱ��� ���� �κ� -->
	<div id="top2">��ٱ��� ���� �κ�</div>
	<br><br>
	<hr color = "red">
	<br>
	<!-- ����ó�� ������ ���� �κ� -->
	
	<div id="content">�Խ��� �� ������ ��û�Ǿ����ϴ�.</div>
	<jsp:forward page="bbs.jsp"></jsp:forward>
</div>

</body>
</html>