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
	
	<div id="content">
<%= session.getAttribute("id") %>�� ȯ���մϴ�!!<br>
	<form action="bbs3.jsp">
	<table>
	<tr>
	<td>���̵�</td>
	<td><input type="text" name="id"></td>
	</tr>
	
	<tr>
	<td>�� ��</td>
	<td><input type="text" name="title"></td>
	</tr>
	
	<tr>
	<td>�� ��</td>
	<td><input type="text" name="content"></td>
	</tr>
	
	<tr>
	<td>�ۼ���</td>
	<td><input type="text" name="writer"></td>
	</tr>
	
	<tr>
	<td></td>
	<td><button type="submit">�ۿø���</button></td>
	</tr>
	</table>
	</form>
	</div>
</div>

</body>
</html>