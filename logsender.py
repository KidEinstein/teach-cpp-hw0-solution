import json
import requests

assignment_id = 1
url = 'http://ec2-user@ec2-34-238-252-233.compute-1.amazonaws.com:3000/api/send_results'
test_results_file = open('./build/test_results.txt')
test_results = []
for line in test_results_file:
    test_case = json.loads(line)
    test_results.append(test_case)

student_file = open('student.json')
student = json.load(student_file)
print(student)
print(test_results)
data = {'student': student, 'result': test_results, 'assignment_id': assignment_id}
# data_str = json.dumps(data, separators=(',',':'))
r = requests.post(url, json=data)
