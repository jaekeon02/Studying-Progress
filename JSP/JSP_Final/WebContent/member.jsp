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
	
	<form action="login.jsp">
	아이디 : <input type="text" name="id"><br>
	비밀번호 : <input type="text" name="pw"><br>
	<button type="submit">로그인 처리</button><br>
	</form>
	<form action="member2.jsp">
	<table>
	<tr>
	<td>아이디</td>
	<td><input type="text" name="id"></td>
	</tr>
	
	<tr>
	<td>비밀번호</td>
	<td><input type="text" name="pw"></td>
	</tr>
	
	<tr>
	<td>이름</td>
	<td><input type="text" name="name"></td>
	</tr>
	
	<tr>
	<td>전화번호</td>
	<td><input type="text" name="tel"></td>
	</tr>
	
	<tr>
	<td></td>
	<td><button type="submit">회원가입 신청</button></td>
	</tr>
	</table>
	</form>
	</div>
</div>

</body>
</html>