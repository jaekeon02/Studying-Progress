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
	
	<form action="login.jsp">
	���̵� : <input type="text" name="id"><br>
	��й�ȣ : <input type="text" name="pw"><br>
	<button type="submit">�α��� ó��</button><br>
	</form>
	<form action="member2.jsp">
	<table>
	<tr>
	<td>���̵�</td>
	<td><input type="text" name="id"></td>
	</tr>
	
	<tr>
	<td>��й�ȣ</td>
	<td><input type="text" name="pw"></td>
	</tr>
	
	<tr>
	<td>�̸�</td>
	<td><input type="text" name="name"></td>
	</tr>
	
	<tr>
	<td>��ȭ��ȣ</td>
	<td><input type="text" name="tel"></td>
	</tr>
	
	<tr>
	<td></td>
	<td><button type="submit">ȸ������ ��û</button></td>
	</tr>
	</table>
	</form>
	</div>
</div>

</body>
</html>