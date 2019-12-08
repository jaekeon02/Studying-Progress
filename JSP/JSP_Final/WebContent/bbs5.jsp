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
	
	<div id="content"></div>
	<%= session.getAttribute("id") %>님 환영합니다!!<br>
	<jsp:useBean id="dto" class="shop.BbsDTO"></jsp:useBean><!-- 이것 빠지면 에러!!!! -->
	<jsp:setProperty property="*" name="dto"/>
	<!-- 자동 import alt shif m -->
<%
BbsDAO dao = new BbsDAO();
BbsDTO dto2 = dao.select(dto);
%>

게시판 수정 페이지 입니다.<br>
<form action="bbs6.jsp">
<table>
	<tr>
		<td>아이디</td>
		<td>
		<input readonly="readonly" type="text" name ="id" value="<%=dto2.getId() %>">
		</td>
	</tr>
	<tr>	
		<td>제목</td>
		<td>
		<input type="text" name="title" value="<%=dto2.getTitle() %>">
		
		</td>
	</tr>
	<tr>	
		<td>내용</td>
		<td height="200">
		<input type="text" name="content" value="<%=dto2.getContent() %>">
		</td>
	</tr>
	<tr>	
		<td>글쓴이</td>
		<td>
		<input type="text" name="writer" value="<%=dto2.getWriter() %>">
		</td>
	</tr>
	<tr colspan="2">
	<button type = "submit">수정하기</button>
	</tr>
</table></form>
</div>

</body>
</html>