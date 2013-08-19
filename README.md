<!-- Travis CI build and test status -->
[![Build Status](https://travis-ci.org/taylormck/ExampleRepository.png)]
(https://travis-ci.org/taylormck/ExampleRepository)
Example Repository
==================
This repository, as its name implies,
is a simple repository created to show off a handful of Github's features
and several of the tools that integrate with it.
As a start, the features and tools presented in
[Team Collaboration with Github](http://net.tutsplus.com/articles/general/team-collaboration-with-github/)
will be put to use.
I'll try to make sure that there are clear instructions explaining how to use
all the tools associated with this repository.
If you find anything to be unclear, open up an issue and I'll get around to it.
If you know a cool new tool or feature that I'm not using,
feel free to open an issue or make a pull request.

Git/Github Usage
----------------
######Forking a repository
Unless you're the owner or a collaborator of a repository,
you won't be able to modify it directly.
In order to add your own changes, you'll need to make a *fork*.
With your own fork, you'll be able to read, write, and push changes.
To fork a repository on Github,
go to any of the project's pages and click the Fork button on the top right.
This will create your own copy of the repository.

![Fork Button](/img/forkButton.png)  
<sup>The Fork button</sup>

Now you can clone your new fork and get to work.
You can create branches, make changes, make commits, and push the changes
back to Github.
For now, your changes will only affect your repository, not the original.

######Getting the latest code from the original
Once you've done some work with a fork,
you may want to have the owner of the original repository take a look at it,
maybe even integrate it.
We do this using a Pull Request.
First thing's first, you'll need to add the original repository as a remote.
This can be done using the following command.

`git remote add upstream [original repository's url]`

From there, we need to pull down any work that's been done since you last
synced with the original.
This can be done with a simple fetch.

`git fetch`

Next, we need to merge in the changes.
We'll do this using the rebase command instead of merge.
This will often help us avoid merge conflicts and will keep our history cleaner.
You can read more about rebase in
[The Magical and Not Harmful Rebase](http://jeffkreeftmeijer.com/2010/the-magical-and-not-harmful-rebase/).
You'll want to rebase from the latest stable code, which is usually the `develop` branch.
If the original doesn't have a `develop` branch, you may have to use `master`.
When in doubt, check the original repository's readme or ask the owners what branch to use.
The command will look like this.

`git rebase develop`  
<sup>Remember that you may need to rebase from a branch other than develop</sup>

The rebase command will go one commit at a time.
If there are any merge conflicts along the way,
the rebase will stop until you've resolved them.
Once resolved, you can continue the rebase using

`git rebase --continue`

######Creating a Pull Request
Now that you've got the latest code from the original,
test to make sure that you're changes are still working correctly.
Commit and push when you're ready,
then go on back to your fork's page on Github.
Select the branch whose changes you want to upload,
then click the Compare and Review button.

![Compare and Review](/img/compareAndReviewButton.png)  
<sup>The Compare and Review button</sup>

This will bring up a page where you can review your changes and create a pull request.
You may view the diff of every file changed and a list of commits.
Click the Create Pull Request area and you will given some text areas where you
may fill in a title and summary of the pull request.
Click the Send Pull Request button to the this pull request to the original repository.

<!-- TODO add createPullRequest and sendPullRequest images -->
![Create Pull Request](/img/createPullRequest.png)  
<sup>The Create Pull Request button</sup>

![Send Pull Request](/img/sendPullRequest.png)  
<sup>The Send Pull Request button</sup>

In the original repository, you will find that your pull request has been added
as an issue.
The owner of the original repository may now review your changes.
The pull request also acts as a thread,
and they may comment on it and discuss your changes with you.
Once they are satisfied, they may merge your pull request into the original.
Remember, whether they accept your code or not is up to them.

######Tagging Issues and Other Users
On Github, in pretty much any text area you can type in, you can link to issues
of the current directory.
This makes histories easier to read, and can keep the status of issues up to date.
You simply a pound sign and the number of the issue.
If the message includes one of the words fixes, fixed, close, closes, or closed,
then the numbered issue will be closed automatically.
If automatically closing more than one issue, you must say one of the magic words
again before each issue number.
The issue's thread will be updated to show that it was referenced.
You can also tag other Github users by using the at sign followed by their name.
This will send them a notificaton and a link to the thread.
This can be done in an other issues, pull requests, and commit messages.
Informally, the process may look something like this

`git commit -am "Fixed #14"`  
<sup>This will automatically close issue 14 when pushed to Github</sup>

<!-- TODO -->
Here's an example of a commit referencing an issue in this very repository.
![Commit Issue Tag](/img/commitIssueTag.png)  
<sup>The commit message references an issue.</sup>

![Issue Referenced](/img/issueReferenced.png)  
<sup>The issue thread now contains a notification that is was referenced.</sup>

Feel free to look at the actual
[commit message](https://github.com/taylormck/ExampleRepository/commit/569929599ac821a90504e41c18c03d9fe17c4792)
and
[issue thread](https://github.com/taylormck/ExampleRepository/issues/16).

Google Test
-----------
Google Test is a C++ testing suite.
I find it very well designed and it is my preferred way to test C/C++ code.  
Take a look at the [project home page](https://code.google.com/p/googletest/).  
If you need help setting it up or creating test programs,
take a look at the [Google Test Example repository](https://github.com/taylormck/GoogleTestExample).

Project Management
------------------
######Trello
This repository now has a Trello board.
[Example Repository board on Trello](https://trello.com/b/m6rhwkg2/example-repository)
All commits and pull requests will automatically create cards on the Trello board.
This is particularly useful implementation of a Kanban board.
All work done is added to the board for quick review.

######Setting up Trello
First, you will need to create an account on Trello.  
Second, create the board you want to use.  
Third, create the lists you want to push cards on for commits and pull requests.  

Lastly, you will need to set up the service hook for your repository.
Go to your repository's settings page.
On the navigation list to the left, click Service Hooks.
On the service hooks page, scroll down the list and click Trello.
You will now see a few text fields, some check fields, and an install notes section.

![Navigation List](/img/navigationList.png)  
<sup>The navigation list</sup>

![Trello Install Notes](/img/trelloInstallNotes.png)  
<sup>Trello Install Notes</sup>

Under install note 1, you will see a link that says "create a consumer token".
Open this link in a new tab, accept, and copy the token it gives you.

Under install note 2, you will see an incomplete url.
You will need to copy and paste this url.
You must replace TOKEN with the token we got from install note 1.
Replace BOARDID with the board id from the board's url.
Upon opening the new url, you will have a json file with all the board's
lists and their id's.
Copy the desired id's into the corresponding text fields.

Apply the settings, and you're done.
Now all commits and pull requests will create cards on Trello.
<!-- TODO -->

Hubot
-----
<!-- TODO -->
Coming soon.

Travis CI
---------
<!-- TODO -->
Coming soon.

Reading/Links
-------
Some literature associated with git, Github, and some of the tools seen in this repository.

- [Team Collaboration with Github](http://net.tutsplus.com/articles/general/team-collaboration-with-github/)
- [The Magical and Not Harmful Rebase](http://jeffkreeftmeijer.com/2010/the-magical-and-not-harmful-rebase/)
- [Git Flow (nvie)](http://nvie.com/posts/a-successful-git-branching-model/)
- [Github Flow](http://scottchacon.com/2011/08/31/github-flow.html)
- [Google Test](https://code.google.com/p/googletest/)
- [Google Test Example](https://github.com/taylormck/GoogleTestExample)
