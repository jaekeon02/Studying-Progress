<%@page import="shop.BbsDTO"%>
<%@page import="java.util.ArrayList"%>
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
	<%
	BbsDAO dao = new BbsDAO();
	ArrayList<BbsDTO> list=dao.selectAll();
	int count = list.size();//리스트내의 갯수
	%>
	
	
	
	
	<div id="content">
	<%= session.getAttribute("id") %>님 환영합니다!!<br>
	<a href="bbs2.jsp">글올리기</a><br>
	게시물의 개수: <%= count%>개<br><!-- 표현식(=이붙으면 print식) -->
	<hr color = "red">
		<table border="1">
		<tr>
			<td style="background: red; color:white;">아이디</td>
			<td style="background: red; color:white;">제 목</td>
			<td style="background: red; color:white;">내 용</td>
			<td style="background: red; color:white;">작성자</td>
		</tr>
			<%
				for(BbsDTO dto:list){
			%>
			<tr>
				<td><%= dto.getId() %></td>
				<td>
					<a href=bbs4.jsp?id=<%= dto.getId() %>><%= dto.getTitle()%></a>
				</td>
				<td><%= dto.getContent()%></td>
				<td><%= dto.getWriter()%></td>
			</tr>
			<%
				}
			%>
		
		
		
		
		</table>
		
		
		<%-- <% 
			for(BbsDTO dto : list){
				out.print("id : "+dto.getId()+"<br>");
				out.print("제목 : "+dto.getTitle()+"<br>");
				out.print("내용 : "+dto.getContent()+"<br>");
				out.print("작성자 : "+dto.getWriter()+"<br>");
				out.print("<hr>");
			}
		%> --%>
		
	
	</div>
</div>

</body>
</html>