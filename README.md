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
<!-- TODO -->
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

######Creating a Pull Request
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

Google Test
-----------
Google Test is a C++ testing suite.
I find it very well designed and it is my preferred way to test C/C++ code.  
Take a look at the [project home page](https://code.google.com/p/googletest/).  
If you need help setting it up or creating test programs,
take a look at the [Google Test Example repository](https://github.com/taylormck/GoogleTestExample).

Project Management
------------------
<!-- TODO -->
Coming soon.

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
