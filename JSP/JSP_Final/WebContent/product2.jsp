<%@page import="shop.ReplyDTO"%>
<%@page import="java.util.ArrayList"%>
<%@page import="shop.ReplyDAO"%>
<%@page import="shop.ProductDTO"%>
<%@page import="shop.ProductDAO"%>

<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>

<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
<link type="text/css" rel="stylesheet" href="css/project.css">
<script type="text/javascript" src="js/jquery-3"></script>
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
	<jsp:useBean id="dto" class="shop.ProductDTO"></jsp:useBean><!-- �̰� ������ ����!!!! -->
	<jsp:setProperty property="*" name="dto"/>
	<!-- �ڵ� import alt shif m -->
<%
ProductDAO dao = new ProductDAO();
ProductDTO dto2 = dao.select(dto);
%>

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
		<td>����</td>
		<td><%=dto2.getPrice() %>
	</tr>
		<tr>	
		<td>��ǥ �̹���</td>
		<td><img src=img/<%= dto2.getImg()%>>
	</tr>
</table>
<hr color="red">
<form action="">
��� �Է�<input type="text" name="content"><br>
�̸�<input type="text" name="writer" value=<%=session.getAttribute("id") %>>
<input type="hidden" name="id" value="<%=dto.getId() %>"><!-- ��ǰ id�� �Ⱥ��̰� ���� --><br>
<button type="submit">��۴ޱ�</button>

</form>
<hr color="red">
<%
	ReplyDAO dao2 = new ReplyDAO();
	ReplyDTO dto3 = new ReplyDTO();
	dto3.setId(dto.getId());
	ArrayList<ReplyDTO> list2 = dao2.selectAll(dto3);
	for(int i= 0; i<list2.size();i++){
		ReplyDTO dto4=list2.get(i);
		%>
			- <%= dto4.getContent() %>,<%= dto4.getWriter() %><br>
		<%
	}
%>

</div>

</body>
</html>