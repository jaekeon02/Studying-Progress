<%@page import="shop.BbsDAO"%>
<%@page import="shop.BbsDTO"%>
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
	
	<div id="content">
	<%= session.getAttribute("id") %>�� ȯ���մϴ�!!<br>
	<jsp:useBean id="dto" class="shop.BbsDTO"></jsp:useBean>
	<jsp:setProperty property="*" name="dto"/>
	<%
	BbsDAO dao= new BbsDAO();
	dao.update(dto);
	%>
	
	</div>
	<jsp:forward page="bbs.jsp"></jsp:forward>
</div>

</body>
</html>