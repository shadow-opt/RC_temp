#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
private:
    string name;
    int age;
    string gender;
    string studentId;

public:
    Student(const string &name_, int age_, const string &gender_, const string &id_)
        : name(name_), age(age_), gender(gender_), studentId(id_)
    {
    }

    const string &getName() const { return name; }
    int getAge() const { return age; }
    const string &getGender() const { return gender; }
    const string &getId() const { return studentId; }

    void setName(const string &newName) { name = newName; }
    void setAge(int newAge) { age = newAge; }
    void setGender(const string &newGender) { gender = newGender; }
    void setId(const string &newId) { studentId = newId; }
};

class GradeBook
{
private:
    struct StudentRecord
    {
        Student student;
        double score;
    };

    vector<StudentRecord> records;

    int findIndexById(const string &id) const
    {
        for (size_t i = 0; i < records.size(); ++i)
        {
            if (records[i].student.getId() == id)
            {
                return static_cast<int>(i);
            }
        }
        return -1;
    }

public:
    ~GradeBook()
    {
        cout << "感谢使用成绩系统" << "\n";
    }

    void addStudent(const Student &stu, double score)
    {
        int idx = findIndexById(stu.getId());
        if (idx != -1)
        {
            records[idx].student = stu;
            records[idx].score = score;
            cout << "已更新学号为" << stu.getId() << "的学生信息\n";
            return;
        }
        records.push_back({stu, score});
        cout << "已添加学号为" << stu.getId() << "的学生\n";
    }

    void removeStudent(const string &id)
    {
        int idx = findIndexById(id);
        if (idx == -1)
        {
            cout << "未找到学号为" << id << "的学生\n";
            return;
        }
        records.erase(records.begin() + idx);
        cout << "已删除学号为" << id << "的学生\n";
    }

    void updateScore(const string &id, double newScore)
    {
        int idx = findIndexById(id);
        if (idx == -1)
        {
            cout << "未找到学号为" << id << "的学生\n";
            return;
        }
        records[idx].score = newScore;
        cout << "已更新学号为" << id << "的成绩\n";
    }

    void updateStudentInfo(const string &id, const string &newName, int newAge, const string &newGender)
    {
        int idx = findIndexById(id);
        if (idx == -1)
        {
            cout << "未找到学号为" << id << "的学生\n";
            return;
        }
        records[idx].student.setName(newName);
        records[idx].student.setAge(newAge);
        records[idx].student.setGender(newGender);
        cout << "已更新学号为" << id << "的学生信息\n";
    }

    void printSortedByScore() const
    {
        vector<StudentRecord> sorted = records;
        sort(sorted.begin(), sorted.end(), [](const StudentRecord &a, const StudentRecord &b)
             { return a.score > b.score; });

        cout << "当前学生信息（按成绩从高到低）：\n";
        for (const auto &rec : sorted)
        {
            cout << "姓名:" << rec.student.getName()
                 << " 年龄:" << rec.student.getAge()
                 << " 性别:" << rec.student.getGender()
                 << " 学号:" << rec.student.getId()
                 << " 成绩:" << rec.score << "\n";
        }
        if (sorted.empty())
        {
            cout << "暂无学生信息\n";
        }
    }
};

static void printMenu()
{
    cout << "\n===== 成绩管理系统 =====\n";
    cout << "1. 添加或更新学生\n";
    cout << "2. 删除学生\n";
    cout << "3. 修改成绩\n";
    cout << "4. 修改学生信息\n";
    cout << "5. 按成绩排序并输出\n";
    cout << "0. 退出系统\n";
    cout << "请选择操作: ";
}

int main()
{

    GradeBook gradeBook;

    cout << "请输入初始学生数量: ";
    int n = 0;
    if (!(cin >> n))
    {
        return 0;
    }
    for (int i = 0; i < n; ++i)
    {
        string name, gender, id;
        int age;
        double score;
        cout << "请输入学生 姓名 年龄 性别 学号 成绩: ";
        cin >> name >> age >> gender >> id >> score;
        Student stu(name, age, gender, id);
        gradeBook.addStudent(stu, score);
    }

    while (true)
    {
        printMenu();
        int choice = -1;
        if (!(cin >> choice))
        {
            break;
        }

        if (choice == 0)
        {
            cout << "程序结束，即将退出。\n";
            break;
        }
        else if (choice == 1)
        {
            string name, gender, id;
            int age;
            double score;
            cout << "请输入学生 姓名 年龄 性别 学号 成绩: ";
            cin >> name >> age >> gender >> id >> score;
            Student stu(name, age, gender, id);
            gradeBook.addStudent(stu, score);
        }
        else if (choice == 2)
        {
            string id;
            cout << "请输入要删除的学号: ";
            cin >> id;
            gradeBook.removeStudent(id);
        }
        else if (choice == 3)
        {
            string id;
            double score;
            cout << "请输入学号和新的成绩: ";
            cin >> id >> score;
            gradeBook.updateScore(id, score);
        }
        else if (choice == 4)
        {
            string id, name, gender;
            int age;
            cout << "请输入学号以及新的 姓名 年龄 性别: ";
            cin >> id >> name >> age >> gender;
            gradeBook.updateStudentInfo(id, name, age, gender);
        }
        else if (choice == 5)
        {
            gradeBook.printSortedByScore();
        }
        else
        {
            cout << "无效操作，请重新选择。\n";
        }
    }

    return 0;
}
