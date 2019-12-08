<%@page import="bean.MemberDAO"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>
<!-- 입력받은 값 파라메터로 서버에서 받아주고,
	 dto객체 만들어서, dto값 넣어주는 것까지. -->
<!-- import,dto 객체 생성 -->
<jsp:useBean id="dto" class="bean.MemberDTO"></jsp:useBean>
<!-- 입력한 파라메터 받아서, dto의 set메소드를 호출 -->
<jsp:setProperty property="*" name="dto"/>
<%
	MemberDAO dao = new MemberDAO();
	dao.insert(dto);
%>
<h3>받은 데이터 확인</h3>
<hr color="red">
아이디: <%=dto.getId() %><br>
비밀번호: <%=dto.getPw() %><br>
이름: <%=dto.getName() %><br>
전화번호: <%=dto.getTel() %><br>

</body>
</html>