<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
    
    <%
    String id=request.getParameter("id");
    String title=request.getParameter("title");
    String content=request.getParameter("content");
    String written=request.getParameter("written");
    
    out.print("���̵�"+id+"<br>");
    out.print("����"+title+"<br>");
    out.print("����"+content+"<br>");
    out.print("�۾���"+written+"<br>");
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