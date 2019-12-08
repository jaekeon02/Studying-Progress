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
	
	<div id="content">
	<%= session.getAttribute("id") %>님 환영합니다!!<br>
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