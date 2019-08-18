pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        sh './jenkins/build.sh'
      }
    }
    stage('Test') {
      steps {
        sh './jenkins/test.sh'
      }
    }
    stage('Stirling Build') {
      when {
        branch 'stirling'
      }
      steps {
        sh './jenkins/stirling-build.sh'
      }
    }
    stage('Publish') {
      when {
        branch 'stirling'
      }
      steps {
        sh './jenkins/stirling-publish.sh'
      }
    }
  }
}