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
	<jsp:useBean id="dto" class="shop.ProductDTO"></jsp:useBean><!-- 이것 빠지면 에러!!!! -->
	<jsp:setProperty property="*" name="dto"/>
	<!-- 자동 import alt shif m -->
<%
ProductDAO dao = new ProductDAO();
ProductDTO dto2 = dao.select(dto);
%>

<br>
게시판 상세 페이지 입니다.<br>
<table>
	<tr>
		<td>아이디</td>
		<td><%=dto2.getId() %>
	</tr>
	<tr>	
		<td>제목</td>
		<td><%=dto2.getTitle() %>
	</tr>
	<tr>	
		<td>내용</td>
		<td height="200"><%=dto2.getContent() %>
	</tr>
	<tr>	
		<td>가격</td>
		<td><%=dto2.getPrice() %>
	</tr>
		<tr>	
		<td>대표 이미지</td>
		<td><img src=img/<%= dto2.getImg()%>>
	</tr>
</table>
<hr color="red">
<form action="">
댓글 입력<input type="text" name="content"><br>
이름<input type="text" name="writer" value=<%=session.getAttribute("id") %>>
<input type="hidden" name="id" value="<%=dto.getId() %>"><!-- 제품 id를 안보이게 전달 --><br>
<button type="submit">댓글달기</button>

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