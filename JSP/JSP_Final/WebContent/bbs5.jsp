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

�Խ��� ���� ������ �Դϴ�.<br>
<form action="bbs6.jsp">
<table>
	<tr>
		<td>���̵�</td>
		<td>
		<input readonly="readonly" type="text" name ="id" value="<%=dto2.getId() %>">
		</td>
	</tr>
	<tr>	
		<td>����</td>
		<td>
		<input type="text" name="title" value="<%=dto2.getTitle() %>">
		
		</td>
	</tr>
	<tr>	
		<td>����</td>
		<td height="200">
		<input type="text" name="content" value="<%=dto2.getContent() %>">
		</td>
	</tr>
	<tr>	
		<td>�۾���</td>
		<td>
		<input type="text" name="writer" value="<%=dto2.getWriter() %>">
		</td>
	</tr>
	<tr colspan="2">
	<button type = "submit">�����ϱ�</button>
	</tr>
</table></form>
</div>

</body>
</html>