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
	<jsp:useBean id="dto" class="shop.MemberDTO"></jsp:useBean>
	<jsp:setProperty property="*" name="dto"/>
	<%
	MemberDAO dao = new MemberDAO();
	boolean result=dao.login(dto);
	if(result == true){
		session.setAttribute("id", dto.getId());
	%>
		<h3>ȯ���մϴ�.<%= dto.getId() %> �α��� �Ǿ����ϴ�.</h3>
	<%
	}else{
		%>
		<h3>�α��ο� �����߽��ϴ�. �ٽ��ѹ� �õ����ֽñ� �ٶ��ϴ�.</h3>
		<%
	}
	%>	
</div>

</body>
</html>