1. Plugint

Bluepinrt Library로 MyIDPlugin을 생성 후 생성된 MyIDPluginBPLibrary.h와 MyIDPluginBPLibrary.cpp에서 Set User Name과 Get User Name을 구현하였습니다.

![alt text](image.png)



2. GameInstance Subsystem
New C++ Class로 GameInstance Subsystem을 생성하고 생성된 GameInstanceSubsystem.h와 GameInstanceSubsystem.cpp에서 Set User Name과 Get User Name을 구현하였습니다.

![alt text](image-1.png)



3. Level Blueprint에서 Plugin에 Set/Get User Name과 GameInstance Subsystem에 Set/Get User Name를 사용하였습니다.

![alt text](image-2.png)


4. Packaging한 파일은 Pakaging폴더 > Windows > Plugin.exe에 있습니다.


실행 화면
![alt text](image-3.png)