<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>
<!-- �Է¹��� �� �Ķ���ͷ� �������� �޾��ְ� dto��ü ���� dto�� �־��ִ� �� ����,import���ʿ� ���� -->
<jsp:useBean id="dto" class="bean.MemberDTO"></jsp:useBean>
<!-- �Է��� �Ķ���� �޾Ƽ�, dto�� set�޼ҵ带 ȣ�� -->
<jsp:setProperty property="*" name="dto"/>
<h3>���� ������ Ȯ��</h3>
<hr color="red">
���̵� : <%= dto.getId() %><br>
��й�ȣ : <%= dto.getPw() %><br>
�̸� : <%= dto.getName() %><br>
��ȭ��ȣ : <%= dto.getTel()%><br>


</body>
</html>