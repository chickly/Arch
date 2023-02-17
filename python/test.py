import random
import numpy as np

names = ['何牧桓', '黄文斌', '冯秀坤', '谢飞翔', '吴骐任']
courses = ['语文', '数学', '英语']
# 随机生成数
scores = [[] for _ in range(5)]
for i in range(5):
    for _ in range(3):
        scores[i].append(random.randrange(50, 100))  # 把生成的随机数放进courses1里面

for i, name in enumerate(names):
    for j, course in enumerate(courses):
        print(f'{name}的{course}成绩：{scores[i][j]}')
    print("\n")
# 平均分
for i in range(len(scores)):
    print(f'{name}的总分是：{sum(scores[i])}')
    total = sum(scores[i])/3
    print(f'{name}的平均成绩是：{total:.2f}')
    

# 各科最高分 最低分 标准差
for j, course in enumerate(courses):
    temp = [scores[i][j] for i in range(len(names))]
    print(temp)
    print(f'{course}的最高分：{max(temp)}')
    print(f'{course}最低分：{min(temp)}')
    print(f'{course}标准差：{np.std(temp)}')
    print("\n")
# 平均分排序并输出学生信息


































































































