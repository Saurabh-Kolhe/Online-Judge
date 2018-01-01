from django.db import models


class User(models.Model):
    login_name = models.CharField(max_length=100)
    phone_number1 = models.IntegerField()
    phone_number2 = models.IntegerField()
    college_name1 = models.CharField(max_length=100)
    college_name2 = models.CharField(max_length=100)
    user_name1 = models.CharField(max_length=100)
    user_name2 = models.CharField(max_length=100)
    email1 = models.CharField(max_length=100)
    email2 = models.CharField(max_length=100)
    total_score = models.IntegerField(default=0)
    end_time = models.IntegerField(default=0)
    # score = models.TextField()
    money = models.IntegerField(default=100)
    easy_counter = models.IntegerField(default=0)

    def __str__(self):
        return str(self.pk)


class Question(models.Model):
    question = models.TextField(max_length=4000)
    question_title = models.CharField(max_length=2000)
    input = models.CharField(default=0, max_length=5000)
    correct_op = models.CharField(default=0, max_length=10000)
    explanation = models.CharField(max_length=7000)
    test_input = models.CharField(max_length=700)
    test_output = models.CharField(max_length=10000)
    cost = models.IntegerField()
    user = models.ManyToManyField(User, null=True, through="Score")
    type = models.CharField(default="Easy", max_length=10)

    def __str__(self):
        return self.question_title


class Score(models.Model):
    user_f = models.ForeignKey(User, on_delete=models.CASCADE)
    question_f = models.ForeignKey(Question, on_delete=models.CASCADE)
    score = models.IntegerField(default=0)
