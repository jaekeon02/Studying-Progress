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
<jsp:useBean id="dto" class="shop.MemberDTO"></jsp:useBean>
<jsp:setProperty property="*" name="dto"/>
<!-- db�� ���� -->
<%
MemberDAO dao = new MemberDAO();
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
	
	<div id="content">ȸ������ ������ ������ ��û�Ǿ����ϴ�.</div>
</div>

</body>
</html>