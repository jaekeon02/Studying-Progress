<%@page import="shop.ProductDTO"%>
<%@page import="java.util.ArrayList"%>
<%@page import="shop.ProductDAO"%>
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
	
	<div id="content">��ǰ ����Ʈ ó��</div>
	<%
	ProductDAO dao = new ProductDAO();
	ArrayList<ProductDTO> list=dao.selectAll();
	int count = list.size();//����Ʈ���� ����
	%>
		<%= session.getAttribute("id") %>�� ȯ���մϴ�!!<br>
		
	<div id="content">
		<hr color = "red">
		<table border="1">
		<tr>
			<td style="background: red; color:white;">���̵�</td>
			<td style="background: red; color:white;">�� ��</td>
			<td style="background: red; color:white;">�� ��</td>
			<td style="background: red; color:white;">�� ��</td>
			<td style="background: red; color:white;">��ǥ �̹���</td>
		</tr>
			<%
				for(ProductDTO dto:list){
			%>
			<tr>
				<td><%= dto.getId() %></td>
				<td>
					<a href=product2.jsp?id=<%= dto.getId() %>><%= dto.getTitle()%></a>
				</td>
				<td><%= dto.getContent()%></td>
				<td><%= dto.getPrice()%></td>
				<td>
					<img width="150"  height="150" src=img/<%= dto.getImg()%>></td>
			</tr>
			<%
				}
			%>
		
		
		
		
		</table>
</div>
</div>
</body>
</html>