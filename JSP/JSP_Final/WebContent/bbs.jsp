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
	<%
	BbsDAO dao = new BbsDAO();
	ArrayList<BbsDTO> list=dao.selectAll();
	int count = list.size();//����Ʈ���� ����
	%>
	
	
	
	
	<div id="content">
	<%= session.getAttribute("id") %>�� ȯ���մϴ�!!<br>
	<a href="bbs2.jsp">�ۿø���</a><br>
	�Խù��� ����: <%= count%>��<br><!-- ǥ����(=�̺����� print��) -->
	<hr color = "red">
		<table border="1">
		<tr>
			<td style="background: red; color:white;">���̵�</td>
			<td style="background: red; color:white;">�� ��</td>
			<td style="background: red; color:white;">�� ��</td>
			<td style="background: red; color:white;">�ۼ���</td>
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
				out.print("���� : "+dto.getTitle()+"<br>");
				out.print("���� : "+dto.getContent()+"<br>");
				out.print("�ۼ��� : "+dto.getWriter()+"<br>");
				out.print("<hr>");
			}
		%> --%>
		
	
	</div>
</div>

</body>
</html>