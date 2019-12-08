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
	<!-- 메뉴가 들어가는 부분 -->
	<div id="top">
		<jsp:include page="top.jsp"></jsp:include><!-- 미리 만든 탑삽입 -->
	</div>
	
	<!-- 장바구니 들어가는 부분 -->
	<div id="top2">장바구니 들어가는 부분</div>
	<br><br>
	<hr color = "red">
	<br>
	<!-- 메인처리 내용이 들어가는 부분 -->
	
	<div id="content">상품 리스트 처리</div>
	<%
	ProductDAO dao = new ProductDAO();
	ArrayList<ProductDTO> list=dao.selectAll();
	int count = list.size();//리스트내의 갯수
	%>
		<%= session.getAttribute("id") %>님 환영합니다!!<br>
		
	<div id="content">
		<hr color = "red">
		<table border="1">
		<tr>
			<td style="background: red; color:white;">아이디</td>
			<td style="background: red; color:white;">제 목</td>
			<td style="background: red; color:white;">내 용</td>
			<td style="background: red; color:white;">가 격</td>
			<td style="background: red; color:white;">대표 이미지</td>
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