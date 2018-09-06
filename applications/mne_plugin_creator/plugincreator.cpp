#include "plugincreator.h"

PluginCreator::PluginCreator(QObject *parent) : QObject(parent), out(stdout) {}

void PluginCreator::createPlugin(PluginParams &params) {
  out << "Creating plugin: " << params.m_name << "..." << endl;
  createFolderStructure(params.m_name);
  copyTemplates();
}

void PluginCreator::createFolderStructure(QString &pluginName) {
  out << "Attempting to created folder structure for you new plugin..." << endl;
  QString pluginsPath("../mne_scan/plugins");
  QString srcPath = pluginsPath + "/" + pluginName;
  QString formPath = srcPath + "/" + "FormFiles";
  QString imageFolder = srcPath + "/images";

  if (!QDir(pluginsPath).exists()) {
    throw std::runtime_error(
        "Could not find mne_scan plugins folder. Make sure you ran the plugin "
        "creator from within the mne_plugin_creator folder");
  }

  createDirectory(srcPath);
  out << "Created source folder at " << srcPath << endl;

  createDirectory(formPath);
  out << "Created form files folder at " << formPath << endl;

  createDirectory(imageFolder);
  out << "Created images folder at " << imageFolder << endl;
}

void PluginCreator::createDirectory(QString &path) {
  bool success = QDir::current().mkdir(path);
  if (!success) {
    throw std::invalid_argument(
        "Unable to create directory named: " + path.toStdString() +
        ".\n Does a folder with that name already exist?");
  }
}

void PluginCreator::copyTemplates() {
  out << "Copying templates into the new directories...";
}
