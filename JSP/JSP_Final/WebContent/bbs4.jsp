<%@page import="shop.BbsDTO"%>
<%@page import="shop.BbsDAO"%>
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
	
	<div id="content"></div>
	<%= session.getAttribute("id") %>�� ȯ���մϴ�!!<br>
	<jsp:useBean id="dto" class="shop.BbsDTO"></jsp:useBean><!-- �̰� ������ ����!!!! -->
	<jsp:setProperty property="*" name="dto"/>
	<!-- �ڵ� import alt shif m -->
<%
BbsDAO dao = new BbsDAO();
BbsDTO dto2 = dao.select(dto);
%>
<a href="bbs5.jsp?id=<%=dto2.getId() %>">[�����ϱ�]</a>
<a href="bbs7.jsp?id=<%=dto2.getId() %>">[�����ϱ�]</a>

<br>
�Խ��� �� ������ �Դϴ�.<br>
<table>
	<tr>
		<td>���̵�</td>
		<td><%=dto2.getId() %>
	</tr>
	<tr>	
		<td>����</td>
		<td><%=dto2.getTitle() %>
	</tr>
	<tr>	
		<td>����</td>
		<td height="200"><%=dto2.getContent() %>
	</tr>
	<tr>	
		<td>�۾���</td>
		<td><%=dto2.getWriter() %>
	</tr>
</table>
</div>

</body>
</html>