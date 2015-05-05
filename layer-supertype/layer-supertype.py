#!/usr/bin/env python2
import datetime

class UserContent(object):
    def __init__(self):
        self.date = datetime.datetime.now()

    def setContent(self, content):
        self.content = content

    def setAuthor(self, author):
        self.author = author

    def getContent(self):
        return self.content

    def getAuthor(self):
        return self.author

    def __str__(self):
        out = "Author: " + self.author + "\n"
        out += "Content: " + self.content + "\n"
        return out
        

class CommentInterface(UserContent):
    def __init__(self):
        super(CommentInterface, self).__init__()

    def setParent(self, parent):
        self.parent = parent

    def getParent(self):
        return self.parent

class PostInterface(UserContent):
    def __init__(self):
        self.tags = []
        super(PostInterface, self).__init__()

    def setTitle(self, title):
        self.title = title

    def getTitle(self):
        return self.title

    def addTag(self, tag):
        self.tags.append(tag)

    def getTags(self):
        return self.tags

    def __str__(self):
        out = "Title: " + self.title + "\n"
        out += "Tags: " + str(self.tags) + "\n"
        return out + super(PostInterface, self).__str__()

class BlogComment(CommentInterface):
    def __init__(self):
        super(BlogComment, self).__init__()

    def setParent(self, parent):
        if isinstance(parent, BlogPost):
            super(BlogComment, self).setParent(parent)
        else:
            print "Blog comment can only have blog post parents"

class BlogPost(PostInterface):
    def __init__(self):
        self.comments = []
        super(BlogPost, self).__init__()

    def addComment(self, comment):
        if isinstance(comment, BlogComment):
            self.comments.append(comment)
            comment.setParent(self)
        else:
            print "Can only add BlogComments to a BlogPost"

    def getComments(self):
        return self.comments

    def __str__(self):
        out = "Comments: \n"
        for comment in self.comments:
            out += str(comment) + "\n"
        return super(BlogPost, self).__str__() + out


def main():
    print "Starting blog post system"

    new_post = BlogPost()
    new_post.setAuthor("Robert Holt")
    new_post.setTitle("A Post")
    new_post.setContent("This is an awesome blog post")
    new_comment = BlogComment()
    new_comment.setAuthor("Dan Krutz")
    new_comment.setContent("This post sucks")
    new_post.addComment(new_comment)

    print "The only post"
    print str(new_post)

main()
