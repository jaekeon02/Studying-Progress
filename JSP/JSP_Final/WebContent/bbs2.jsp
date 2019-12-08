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
	<form action="bbs3.jsp">
	<table>
	<tr>
	<td>아이디</td>
	<td><input type="text" name="id"></td>
	</tr>
	
	<tr>
	<td>제 목</td>
	<td><input type="text" name="title"></td>
	</tr>
	
	<tr>
	<td>내 용</td>
	<td><input type="text" name="content"></td>
	</tr>
	
	<tr>
	<td>작성자</td>
	<td><input type="text" name="writer"></td>
	</tr>
	
	<tr>
	<td></td>
	<td><button type="submit">글올리기</button></td>
	</tr>
	</table>
	</form>
	</div>
</div>

</body>
</html>