package final_.constant;

public class Earth {

	/*
		상수(constant)
		상수는 고정된 불변의 값을 의미합니다. 따라서 어디에서 접근을 하던지 같은 값이 나와야하며, 값 변경도 불가능해야 합니다.
		
		따라서 자바에서는 상수를 선언할 때 static과 final을 함께 사용합니다.
		
		상수는 대문자로 작성하는것이 관례이며, 연결단어가 있을 경우(_)를 사용해서 연결합니다.
	 */
	public static final double EARTH_RADIUS = 6400;
	public static final double EARTH_SURFACE_AREA;
	
	static {
		EARTH_SURFACE_AREA = EARTH_RADIUS * EARTH_RADIUS * Math.PI * 4;
	}
	
	public static void main(String[] args) {
		System.out.println("지구의 반지름 : " + EARTH_RADIUS+"km");
		System.out.println("지구의 표면적 : " + EARTH_SURFACE_AREA+"km^2");
	}
}
