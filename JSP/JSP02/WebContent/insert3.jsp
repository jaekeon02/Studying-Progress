<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
    
    <%
    String id = request.getParameter("id");
    String pw = request.getParameter("pw");
    String name = request.getParameter("name");
    String com = request.getParameter("com");
    String tel = request.getParameter("tel");
    String gender = request.getParameter("gender");
    String[] hobby = request.getParameterValues("hobby");
    //���� �������� Ŭ���̾�Ʈ�� ���� �Ѿ���� ����
    //requerst.getParameterValues()�� ����.
    //��ȯ Ÿ���� String[](�迭)�� �޴´�
    //for������ �迭�� �ִ� ���� ���� �־���Ѵ�.
    
    out.print("ID��"+id+"<br>");
    out.print("PW��"+pw+"<br>");
    out.print("�̸���"+name+"<br>");
    out.print("��ȭ��ȣ��"+com+tel+"<br>");
    out.print("������"+gender+"<br>");
    out.print("��̴�");
    for(String s : hobby)
    	{out.print(" "+s);}
    
    %>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>

</body>
</html>