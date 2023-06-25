
#define MAX_DAY 1000001
#define MAX_MICROBE_CNT 13000

typedef struct MicrobeNode
{
    char name[];
} MicrobeNode;

typedef struct Microbe
{
    char *name;
    char *parent;
    int birthday;
    int deathday;
    int distance;
} Microbe;

long alive_microbe_cnt[MAX_DAY];
MicrobeNode microbe_name_map[MAX_MICROBE_CNT];

void init(char mAncestor[], int mDeathday)
{

    /// alive_microbe_cnt 초기화
    for (int i = 0; i <= MAX_DAY; i++)
        alive_microbe_cnt[i] = 0;
    for (int i = 0; i <= mDeathday; i++)
        alive_microbe_cnt[i] = 1;

    return;
}

int add(char mName[], char mParent[], int mBirthday, int mDeathday)
{
    int newDistance = 0;
    /// parent의 객체를 가져옴
    /// parent의 distance를 가져옴

    /// newDistance = parent_distance + 1 

    /// #1 Microbe 생성 => new Microbe(newDistance)

    /// #2 alive_microbe_cnt  계산
    for (int i = mBirthday; i <= mDeathday; i++) alive_microbe_cnt[i]++;

    /// #3 dictionary에 mName을 키로 저장
    /// dictionary.push(microbe)


    return newDistance;
}

int distance(char mName1[], char mName2[])
{
    /// 시간복잡도: O(logn)

    /// #1 mName2 distance > mName1 distance
    /// #1-1 mName2의 부모를 쭉 따라 올라가면서 mName1이 있는지 검사 =>
    /// 있으면? (mName2 distance) - (mName1 distance)
    /// 없으면? (mName2 distance) + (mName1 distance)

    /// #2 mName2 distance < mName1 distance
    /// #2-1 mName2의 자식의 자식들의 자식들 쭉 따라 내려가면서 mName1 distance에 mName1이 있는지 검사 =>
    /// 있으면? (mName2 distance) - (mName1 distance)
    /// 없으면? (mName2 distance) + (mName1 distance)

    return 0;
}

int count(int mDay)
{
    /// 시간복잡도: O(1)
    return alive_microbe_cnt[mDay];
}
