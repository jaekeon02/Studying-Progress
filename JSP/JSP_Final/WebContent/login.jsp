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
	<jsp:useBean id="dto" class="shop.MemberDTO"></jsp:useBean>
	<jsp:setProperty property="*" name="dto"/>
	<%
	MemberDAO dao = new MemberDAO();
	boolean result=dao.login(dto);
	if(result == true){
		session.setAttribute("id", dto.getId());
	%>
		<h3>환영합니다.<%= dto.getId() %> 로그인 되었습니다.</h3>
	<%
	}else{
		%>
		<h3>로그인에 실패했습니다. 다시한번 시도해주시길 바랍니다.</h3>
		<%
	}
	%>	
</div>

</body>
</html>