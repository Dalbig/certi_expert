extern void scanFromRobot(int ceilingState[3][3]);
extern int moveRobot(int mCommand);

void init(int N, int subTaskCount)
{
    // 인접한 노드들의 엣지를 함께 저장한다
}

void cleanHouse(int mLimitMoveCount)
{
    // 방문한 노드가 포텐셜 노드가 될 수 있는지 검사한다
    // 포텐셜 노드 : 엣지가 하나 이상 있고 그  엣지에 연결된 노드가 방문되지 않은 경우

    // direction으로  움직일때 엣지를  끊고 남아있는  엣지가 있을경우 스택에 추가한다
    // 
}