<%@page import="bean.MemberDTO"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>
<% //��ũ��Ʈ�� �ڹٷ� �� �κ��ڵ�

//Ŭ���̾�Ʈ�� �Է��� �����͸� �������� �޾��־� ������ ����
String id = request.getParameter("id");
String pw = request.getParameter("pw");
String name = request.getParameter("name");
String tel = request.getParameter("tel");

MemberDTO dto = new MemberDTO();
dto.setId(id);
dto.setPw(pw);
dto.setName(name);
dto.setTel(tel);
%>
<h3>���� ������ Ȯ��</h3>
<hr color="red">
���̵� : <%= id %><br>
��й�ȣ : <%= pw %><br>
�̸� : <%= name %><br>
��ȭ��ȣ : <%= tel %><br>


</body>
</html>