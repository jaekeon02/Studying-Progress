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
<!-- 클라이언트가 입력한 데이터 받아서 db에 저장 -->
<!-- 받은 데이터를 dto에 넣어서 묶어주어야함 -->
<jsp:useBean id="dto" class="shop.BbsDTO"></jsp:useBean>
<jsp:setProperty property="*" name="dto"/>
<!-- db에 저장 -->
<%
BbsDAO dao = new BbsDAO();
dao.insert(dto);
%> 
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
	
	<div id="content">게시판 글 삽입이 요청되었습니다.</div>
	<jsp:forward page="bbs.jsp"></jsp:forward>
</div>

</body>
</html>